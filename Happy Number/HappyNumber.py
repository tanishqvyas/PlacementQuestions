
def get_digit_sqr_sum(n):

	ans = 0

	while n:

		ans += (n%10)**2
		n = n//10

	return ans


# function to finalize whether the number is happy or not
def isHappyNumber(n):

	# Pre check
	if(n == 1):
		return True

	# Set of visited numbers
	visited = set()
	visited.add(n)

	# Iterations
	while True:

		# Find number for next iteration
		n = get_digit_sqr_sum(n)

		# check if we reached one
		if(n == 1):
			return True

		else:

			# Check for cycle/loop
			if(n in visited):
				return False

			# Add the number in visited set if not yet visited
			else:
				visited.add(n)




# function to run tests
def main():
	f = open("test_case.txt")
	check = True
	for line in f:
		line = line.strip()
		line = line.split()
		val = int(line[0])
		out = line[1]

		res = isHappyNumber(val)
		if((res and out == "NO") or (not res and out == "YES")):
			check = False
			print("Test case failed for ", val, sep = "")

	if(check):
		print("All test cases passed")

	f.close()


if __name__ == '__main__':
	main()

	# NOTE
	# Other methods may involve the use of fast-slow pointer concept 
	# to detect cycle
