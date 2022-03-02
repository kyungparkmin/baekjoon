for _ in range(int(input())):
  players = []
  for _ in range(int(input())):
    price, name = input().split()
    players.append([int(price), name])
    players.sort()
  print(players[-1][1])