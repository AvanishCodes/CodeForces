for _ in range(int(input())):
  s = input()
  maxm = int(1)
  for i in range(len(s)):
    k = int(s[i])
    if k > maxm:
      maxm = int(s[i])
  print(max(s))