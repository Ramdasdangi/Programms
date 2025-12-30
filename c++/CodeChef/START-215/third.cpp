/*

t = int(input())
for _ in range(t):
    n,c = map(int,input().split())
    arr = list(map(int,input().split()))
    bin_arr = input()
    
    coin = 0
    # print(bin_arr)
    flag = True
    nor = 0
    spec = 0
    for i in range(n):
        if(bin_arr[i]=="0"):
            nor+=arr[i]
            
        elif(bin_arr[i]=="1"):
            spec+=arr[i]
    if(nor>=c and spec>c):
        print(nor+spec-c)
    else:
        print(nor)
*/