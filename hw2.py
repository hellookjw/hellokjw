def get_integer(prompt):
    integer=int(input(prompt))
    return integer
  
def exchange(price):
    n500=price//500
    price%=500
    n100=price//100
    price%=100
    n50=price//50
    price%=50
    n10=price//10
    
    print('500원짜리 동전의 개수: {n500}')
    print('100원짜리 동전의 개수: {n500}')
    print('50원짜리 동전의 개수: {n50}') 
    print('10원짜리 동전의 개수: {n10}')
    
price=get_integer('동전으로 교환하고자 하는 금액은?')

exchange(price)
