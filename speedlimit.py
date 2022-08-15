while(True):
    a = int(input())
    if(a==-1):break
    hour = []
    answer = 0
    hour.append(0)
    for i in range(a):
        speed = int(input())
        hours = int(input())
        hour.append(hours)
        answer+=speed*(hours-hour[len(hour)-2])
    print(answer , "miles")
