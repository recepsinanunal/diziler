#include <iostream>
using namespace std;

// Determinant hesaplama fonksiyonu
int determinant(int mat[3][3]) {
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
           mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
           mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Matris A elemanlar�n� kullan�c�dan alma
    cout << "Matris A (3x3) elemanlarini giriniz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Matris B elemanlar�n� kullan�c�dan alma
    cout << "Matris B (3x3) elemanlarini giriniz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Matris A + B (Toplama) i�lemi
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Toplam matrisi ekrana yazd�rma
    cout << "\nMatris A + B (Toplam):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Matris A x B (�arpma) i�lemi
    int D[3][3] = {0}; // Sonu� matrisi
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            D[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // �arp�m matrisi ekrana yazd�rma
    cout << "\nMatris A x B (Carpim):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    // Determinant hesaplama
    cout << "\nMatris A'nin determinant�: " << determinant(A) << endl;

    return 0;
}
