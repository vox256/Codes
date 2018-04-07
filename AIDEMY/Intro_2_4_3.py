storages = [1, 2, 3, 4, 5, 6]

for n in storages:
    
    # 変数nの値が2の倍数の時だけ、処理をスキップさせてください
    if n % 2 == 0:
        continue
        
    print(n)