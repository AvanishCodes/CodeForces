for _ in range(int(input())):
  n = int(input())
  a = list(map(int, input().split()))
  minpos = a.index(min(a))
  maxpos = a.index(max(a))  
  l = min(minpos, maxpos)+1
  r = max(minpos, maxpos)+1
  lcurrent = l + min(r-l, n-r+1)
  # Start hunting from the right
  rcurrent = n-r+1 + min(r-l, l)
  print(min(lcurrent, rcurrent))