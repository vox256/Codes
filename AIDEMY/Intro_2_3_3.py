x = 5

# whileを用いて、変数xが0ではない間、ループするように作ってください
while x != 0:
        
    # whileの中で実行される処理は、変数xから1を引く処理と引いた後に出力させる処理です。
    x -= 1
    print(x)
    
    if x == 1:
        print("Bang")
        break