int main()
{
	MutantStack<float> mutant;

	mutant.push(12.58);
	mutant.push(42.42);
	mutant.push(78.35);
	
	std::cout << "Mutant top : " << mutant.top() << " and mutant.size() : " << mutant.size() << std::endl;
	
	mutant.pop();
	std::cout << "Mutant top after pop() : " << mutant.top() << " and mutant.size() : " << mutant.size() << std::endl;
	
	mutant.push(42587.42);
	mutant.push(4.42);
	mutant.push(98.42);
	mutant.push(422.42);
	mutant.push(4242.4242);

	MutantStack<float>::iterator it = mutant.begin();
	MutantStack<float>::iterator itend = mutant.end();
	while (it != itend)
	{
		std::cout << *it << std::endl;
		it++;
	}
	return 0;
}