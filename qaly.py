def main():
  year = int(input())
  sum = 0
  x = 0
  while (x < year):
    A,B = input().split(" ")
    A = float(A)
    B = float(B)
    
    sum += A * B
    x+=1
    
  print(sum)


if __name__ == '__main__':
  main()