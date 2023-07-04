#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& c_merge)
{
	*this = c_merge;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& c_merge)
{
	(void)c_merge;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

static void display_vec(std::vector<unsigned int>& vec)
{
	std::vector<unsigned int>::const_iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

static void display_list(std::list<unsigned int>& vec)
{
	std::list<unsigned int>::const_iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

static std::vector<unsigned int> merge_vectors(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
	std::vector<unsigned int> merge;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			merge.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		merge.push_back(left.front());
		left.erase(left.begin());	
	}
	
	while (!right.empty())
	{
		merge.push_back(right.front());
		right.erase(right.begin());
	}
	return merge;
}

static std::vector<unsigned int> merge_insert_vector(std::vector<unsigned int> vec)
{
	if (vec.size() <= 1)
		return vec;

	int mid = vec.size() / 2;
	std::vector<unsigned int> left(vec.begin(), vec.begin() + mid);
	std::vector<unsigned int> right(vec.begin() + mid, vec.end());

	left = merge_insert_vector(left);
	right = merge_insert_vector(right);

	return (merge_vectors(left, right));
}

void PmergeMe::sortVector(int argc, char **argv)
{
	std::vector<unsigned int> vec_data;

	for (int i = 1; i < argc; i++)
		vec_data.push_back(ft_stou(argv[i]));
	
	std::cout << "Before: ";
	display_vec(vec_data);
	std::clock_t start = std::clock();
	vec_data = merge_insert_vector(vec_data);
	double elapse_time = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MSEC;
	std::cout << "After: ";
	display_vec(vec_data);

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector<unsigned int> : "
			<< elapse_time << " us" << std::endl;
}

static std::list<unsigned int> merge_lists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
	std::list<unsigned int> merge;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			merge.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		merge.push_back(left.front());
		left.erase(left.begin());	
	}
	
	while (!right.empty())
	{
		merge.push_back(right.front());
		right.erase(right.begin());
	}
	return merge;
}

static std::list<unsigned int> merge_insert_list(std::list<unsigned int> lst)
{
	if (lst.size() <= 1)
		return lst;

	int mid = lst.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

	for (int i = 0; i < mid; i++)
	{
		left.push_back(lst.front());
		lst.pop_front();
	}
	right = lst;

	left = merge_insert_list(left);
	right = merge_insert_list(right);

	return (merge_lists(left, right));
}
void PmergeMe::sortList(int argc, char **argv)
{
	std::list<unsigned int> lst_data;

	for (int i = 1; i < argc; i++)
		lst_data.push_back(ft_stou(argv[i]));
	
	std::cout << "Before: ";
	display_list(lst_data);
	std::clock_t start = std::clock();
	lst_data = merge_insert_list(lst_data);
	double elapse_time = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * MSEC;
	std::cout << "After: ";
	display_list(lst_data);

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::list<unsigned int> : "
			<< elapse_time << " ms" << std::endl;
}

const char* PmergeMe::InvalidElemntException::what() const throw() {
	return "PmergeMe exception: invalid element.";
}