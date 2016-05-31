#include <iostream>

template < typename T>
T min(const T t1 , const T t2) {
	return t1 < t2 ? t1 : t2;
}

int main(){
	std::cout<<min<int>(2,4)<<std::endl;
}
