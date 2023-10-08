print('Игра "Крестики-нолики"')

spot = [[' ',' ',' '],
        [' ',' ',' '],
        [' ',' ',' ']]
igro1 = False
igro2 = False

def s_spot():
  print('---------')
  for row in spot:
        print('|', end=' ')
        for cell in row:
            print(cell, end=' ')
        print('|')
  print('---------')

def win_or_draw(spot):
    global igro1, igro2
    for i in range(3):
        if spot[i][0] == spot[i][1] == spot[i][2] != ' ':
            if spot[i][0] == 'X':
                igro1 = True
                return True
            else:
                igro2 = True
                return True
        if spot[0][i] == spot[1][i] == spot[2][i] != ' ':
            if spot[i][0] == 'X':
                igro1 = True
                return True
            else:
                igro2 = True
                return True
    if spot[0][0] == spot[1][1] == spot[2][2] != ' ':
        if spot[i][0] == 'X':
            igro1 = True
            return True
        else:
            igro2 = True
            return True
    if spot[0][2] == spot[1][1] == spot[2][0] != ' ':
        if spot[i][0] == 'X':
            igro1 = True
            return True
        else:
            igro2 = True
            return True
    if all(cell != ' ' for row in spot for cell in row):
        igro1 = True
        igro2 = True
        return True
    return False

def motion(player):
  while True:
      row = int(input(f'Игрок {player}, введите номер строки: ')) - 1
      col = int(input(f'Игрок {player}, введите номер столбца: ')) - 1
      if 0 <= row < 3 and 0 <= col < 3 and spot[row][col] == ' ':
        return row, col
      print('Некорректный ход. Попробуйте еще раз.')

def game():
    global igro1, igro2
    current_player = 'X'
    while True:
        s_spot()
        if win_or_draw(spot):
            if igro1 == igro2:
                print('НИЧЬЯ')
                break
            if igro1 == True and igro2 != True:
                print('Побеждают X')
                break
            if igro1 != True and igro2 == True:
                print('Побеждают O')
                break

        row, col = motion(current_player)
        spot[row][col] = current_player
        if current_player == 'X':
            current_player = 'O'
        else:
            current_player = 'X'

    s_spot()


game()