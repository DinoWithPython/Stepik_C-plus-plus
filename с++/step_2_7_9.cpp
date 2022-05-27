#include <iostream>
#define MAX(x, y, r) {int x_ = x; int y_ = y; int r_ = (x_ > y_) ? x_ : y_; r = r_;}

/*
Напишите функцию, которая принимает на вход целочисленную матрицу 
M (другими словами, просто двумерный целочисленный массив) размера 
rows×cols, и возвращает транспонированную матрицу M^T
(тоже двумерный целочисленный массив) размера cols×rows. 
Если в M на пересечении i-ой строки и j-ого столбца стояло число x, 
то на пересечении  j-ой строки и i-ого столбца в матрице M^T
тоже будет стоять число x, или другими словами M^T[j][i] = M[i][j].

Обратите внимание, что вам неизвестно, каким именно способом выделялась 
память для массива M. Выделять память под массив M^T можете любым 
удобным вам способом. Изменять исходную матрицу нельзя.

Требования к реализации: при выполнении этого задания вы можете определять 
любые вспомогательные функции. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.
*/

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    // Create new matrix
    int ** mt = new int *[cols];
    mt[0] = new int[cols * rows];
    for (int k = 1; k != cols; k++)
        mt[k] = mt[k - 1] + rows;
    // Use bouth matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mt[j][i] = m[i][j];
        }
    }
    return mt;
}

int main() {
    
    int row = 3;
    int col = 5;
    
    // create matrix
    int ** matrix = new int *[row];
    matrix[0] = new int[row * col];
    for (int q = 1; q != row; q++)
    	matrix[q] = matrix[q - 1] + col;
    
    // Add chr
    for (int i =0; i < row; i++){
    	for (int j = 0; j < col; j++){
    		matrix[i][j] = (i + 1) * 10 + (j +1);
		}
	}
    
    // Cout matrix
    for (int i =0; i < row; i++){
    	for (int j = 0; j < col; j++){
    		std::cout << matrix[i][j] << ' ';
		} std::cout << std::endl;
	} 
    
    std::cout << "My func: " << std::endl;
    
    int ** new_matrix = transpose(matrix, 3, 5);
    
    for (int i =0; i < col; i++){
    	for (int j = 0; j < row; j++){
    		std::cout << new_matrix[i][j] << ' ';
		} std::cout << std::endl;
	} 
    
    system("pause");
}