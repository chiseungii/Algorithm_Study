prices = []
for i in range(5):
    prices.append(int(input()))

print(min(prices[:3])+min(prices[3], prices[4])-50)
