def get_fixed_price(discount_rate, discounted_price):
    fixed_price = discounted_price / (100 - discount_rate)
    return fixed_price

discount_rate=int(input('할인율은?')

a_discounted_price=int(input('a상품의 할인된 가격은?')
a_fixed_price = get_fixed_price(discount_rate, a_discounted_price)

b_discounted_price=int(input('b상품의 할인된 가격은?')
b_fixed_price = get_fixed_price(discount_rate, b_discounted_price)

print("a상품의 정가는", product_a_fixed_price, "원")
print("b상품의 정가는", product_b_fixed_price, "원")
