def main():
  a,b = input().split()
  a = int(a)
  b = int(b)

  if a == b:
    print(a+1)

  if a > b:
    for i in range(b+1, a+2):
      print(i)

  if b > a:
    for i in range(a+1, b+2):
      print(i)


if __name__ == '__main__':
  main()