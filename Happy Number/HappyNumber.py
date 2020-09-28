
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

	if isHappyNumber(1):
		print("Works")


if __name__ == '__main__':
	main()
