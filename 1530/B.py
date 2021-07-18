for _ in range(int(input())):
  n, m = map(int, input().split())
  rows = []
  if n%2 == 1:
    if m%2 == 1:
      for i in range(n):
        if i == 0 or i == n-1:
          rows.append([(1-j)%2 for j in range(m)])
        elif i % 2 == 1:
          rows.append([0 for j in range(m)])
        else:
          rows.append([1] + [0 for j in range(m-2)] + [1])
    if m%2 == 0:
      for i in range(n):
        if i == 0:
          rows.append([0 if j%2 == 0 else 1 for j in range(m)])
        elif i == n-1:
          rows.append([1 if j%2 == 0 else 0 for j in range(m)])
        elif i % 2 == 1:
          rows.append([0 for j in range(m)])
        else:
          rows.append([1] + [0 for j in range(m-2)] + [1])

  if n%2 == 0:
    for i in range(n):
      if i == 0:
        if m%2 == 0:
          rows.append([0 if j%2 == 0 else 1 for j in range(m)])
        if m%2 == 1:
          rows.append([1 if j%2 == 0 else 0 for j in range(m)])
      elif i == n-1:
        if m > 3:
          rows.append([0, 0] + [1 if j%2 == 0 else 0 for j in range((m-4))] + [0, 0])
        else:
          rows.append([0, 0, 0])
      elif i%2 == 1:
        rows.append([0 for j in range(m)])
      else:
        rows.append([1] + [0 for j in range(m-2)] + [1])
  # print(rows) 
  for i in range(n):
    print(''.join(str(i) for i in rows[i]))