shopping_bag = []

print('[구입]')
while True:
    item = input('상품명')
    if item == '':
        break
    shopping_bag.append(item)
    num = input('수량')
    if num == '':
        break
    shopping_bag.append(num)
    print(f'장바구니에 {item}가(이) {num}개 담겼습니다.')

print(f'>>> 장바구니 보기:{shopping_bag}')
