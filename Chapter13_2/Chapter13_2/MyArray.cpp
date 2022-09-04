#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//코드를 컨파일할때 특정한 타입으로 컨파일 해야한다고 알려줌
//explicit instatiation
template class MyArray<char>;

//template void MyArray<char>::print();
//template void MyArray<double>::print();