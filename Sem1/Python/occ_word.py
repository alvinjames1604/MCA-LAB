def word_count(str):
	counts=dict()
	words=str.split()

	for word in words:
		if word in counts:
			counts[words]+=1
		else:
			counts[word]=1
	return counts
print(word_count( 'alvin is a good boy'))

