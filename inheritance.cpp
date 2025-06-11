#include <iostream>
#include <string>

class Animal {
	
	private:

	public:
		Animal();
		~Animal();
		void	eat() {
			std::cout << "Animal is eating" << std::endl;
		}
		void	sleep() {
			std::cout << "Animal is sleeping" << std::endl;
		}
};


class Dog : public Animal {
	private:

	public:

		Dog();
		~Dog();
		void	eat() {
			std::cout << "Dog is eating" << std::endl;
	}
};

//CONSTRUCTOR AND DESTRUCTOR OF CLASSES
Animal::Animal(){};
Animal::~Animal(){};
Dog::Dog(){};
Dog::~Dog(){};

void	testInheritance() {
	Dog	dog;

	dog.eat();
	dog.sleep();
}

int	main(void){
	testInheritance();
	return 0;
}
