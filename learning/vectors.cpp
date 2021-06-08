/*

vectors == List or array list.
- dynamic size

std::vector<int> items = {12,13}

for adding element in items - push_back(100)
for getting size - items.size()

//methods

size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.


//iterators

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

Element access:

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

*/

#include<iostream>
#include<vector>

//passing vector to an function
//If we pass here just "func_data" it will run from scratch every single time and prints the same out put for every call
/* 1       2       3       12
   1       2       3       12
   1       2       3       12
   1       2       3       12
   1       2       3       12 */
//And if we put an "&" the it will pass the reference of the vector func_data and now for every callit will add a new element to the vector

/*
1       2       3       12
1       2       3       12      12
1       2       3       12      12      12
1       2       3       12      12      12      12
1       2       3       12      12      12      12      12
*/
void print_vector(std::vector<int> &func_data){

    func_data.push_back(12);

    for(int i =0;i < func_data.size();i++){
        std::cout << func_data[i] << "\t";
    }
    std::cout << "\n";
}
int main(){

    std::vector<int> data = {1,2,3};
    data.push_back(4);
    data.pop_back();
    //std::cout << data[data.size()-1] << "\n";

    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    return 0;
}