from math import sqrt

def main():
  a,b,c = input().split()
  a = int(a)
  b = int(b)
  c = int(c)

  x = sqrt(c**2 + b**2)

  while a > 0:
    if(int(input()) <= x):
      print("DA")
    else:
      print("NE")
    a-=1

if __name__ == '__main__':
  main()