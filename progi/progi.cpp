//variant 21
//#1 Дан массив, состоящий из n элементов. Назовем серией группу подряд идущих одинаковых элементов, а длиной серии – количество этих элементов (длина серии больше 1). Преобразовать массив, уменьшив каждую его серию на один элемент.
//#include <iostream>
//using namespace std;
//void input(int*& arr, int& size)
//{
//    cout << "kol-vo: "; cin >> size;
//    arr = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        cout << "vvedite: "; cin >> arr[i];
//    }
//}
//void process(int*& arr, int& size)
//{
//    int i = 0, ser = 0;
//    bool est = false;
//    for (i = 0; i < size; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            ser++;
//            est = true;
//        }
//        if (arr[i] != arr[i + 1] && est)
//        {
//            int* y;
//            y = new int[size];
//            for (int j = 0, k = 0; j < size; j++)
//            {
//                if (j == i) continue;
//                y[k] = arr[j];
//                k++;
//            }
//            delete[] arr;
//            arr = y;
//            est = false;
//            size--;
//            ser = 0;
//            i--;
//        }
//    }
//}
//void output(const int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//}
//int main()
//{
//    int* a,n;
//    input(a, n);
//    process(a, n);
//    output(a, n);
//    delete[] a;
//    return 0;
//}
//#2 Даны два массива А и В. Сформируйте из них массив С, в котором элементы отсортированы по убыванию. 
//#include <iostream>
//using namespace std;
//void input(int*& arr, int& size)
//{
//    cout << "kol-vo el-tov massiva: ";cin >> size;
//    arr = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        cout << "vvedite: ";cin >> arr[i];
//    }
//}
//void aplusb(const int* arr1, int size1, const int* arr2, int size2, int*& arr3, int& size3)
//{
//    size3 = size1 + size2;
//    arr3 = new int[size3];
//    for (int i = 0; i < size1; i++)
//    {
//        arr3[i] = arr1[i];
//    }
//    for (int i = 0; i < size2; i++)
//    {
//        arr3[size1 + i] = arr2[i];
//    }
//}
//void sortarr(int* arr, int size)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        int max = INT_MIN;
//        int maxIndex;
//        for (int j = i; j < size; j++)
//        {
//            if (arr[j] > max)
//            {
//                max = arr[j];
//                maxIndex = j;
//            }
//        }
//        int temp = arr[i];
//        arr[i] = arr[maxIndex];
//        arr[maxIndex] = temp;
//    }
//}
//void output(const int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//}
//int main()
//{
//    int *a,*c,*b,n,m,k;
//    input(a, n);
//    input(b, k);
//    aplusb(a, n, b, k, c, m);
//    sortarr(c, m);
//    output(c, m);
//    delete[] a;
//    delete[] b;
//    delete[] c;
//    return 0;
//}
//#3 Дана матрица размера n*m. Поменять местами строки, содержащие минимальный и максимальный элементы матрицы.
//#include <iostream>
//#include <iomanip>
//#include <ctime>
//using namespace std;
//void inputMatrix(int**& matrix, int& rows, int& cols)
//{
//    srand(time(0));
//    cout << "stolbcov: ";cin >> cols;
//    cout << "strok: ";cin >> rows;
//    matrix = new int* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        matrix[i] = new int[cols];
//    }
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            matrix[i][j] = (int)(1000 - rand() % 2000) / 10;
//            cout << setw(7) << matrix[i][j];
//        }
//        cout << "\n\n";
//    }
//}
//void findMinMaxElement(const int** matrix, int rows, int cols, int& max, int& min, int& maxRow, int& minRow)
//{
//    max = matrix[0][0];
//    min = matrix[0][0];
//    maxRow = 0;
//    minRow = 0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            if (matrix[i][j] > max)
//            {
//                max = matrix[i][j];
//                maxRow = i;
//            }
//            if (matrix[i][j] < min)
//            {
//                min = matrix[i][j];
//                minRow = i;
//            }
//        }
//    }
//}
//void findElementIndices(const int** matrix, int rows, int cols, int maxRow, int minRow, int& maxCol, int& minCol, int max, int min)
//{
//    maxCol = 0;
//    minCol = 0;
//    for (int j = 0; j < cols; j++)
//    {
//        if (matrix[maxRow][j] == max)
//        {
//            maxCol = j;
//        }
//        if (matrix[minRow][j] == min)
//        {
//            minCol = j;
//        }
//    }
//}
//void swapRowElements(int** matrix, int cols, int maxRow, int minRow)
//{
//    int temp = 0;
//    for (int j = 0; j < cols; j++)
//    {
//        temp = matrix[maxRow][j];
//        matrix[maxRow][j] = matrix[minRow][j];
//        matrix[minRow][j] = temp;
//    }
//}
//void outputMatrix(const int** matrix, int rows, int cols)
//{
//    cout << "\n\n";
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << setw(7) << matrix[i][j];
//        }
//        cout << "\n\n";
//    }
//}
//void deleteMatrix(int** matrix, int rows)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//}
//int main()
//{
//    int H, W, max, min, maxRow, minRow, maxCol, minCol, ** M;
//    inputMatrix(M, H, W);
//    findMinMaxElement((const int**)M, H, W, max, min, maxRow, minRow);
//    findElementIndices((const int**)M, H, W, maxRow, minRow, maxCol, minCol, max, min);
//    swapRowElements(M, W, maxRow, minRow);
//    outputMatrix((const int**)M, H, W);
//    deleteMatrix(M, H);
//    return 0;
//}
//#4 Дан массив А размера N. Найти количество положительных элементов.
//Создать динамический массив В, перед каждым положительным элементом массива вставив элемент с нулевым значением.
//В программе написать функции: формирования массива В, вывода массива, ввода массива А.
//#include <iostream>
//using namespace std;
//void inputArray(int*& array, int& size)
//{
//    cout << "kol-vo el-tov massiva: ";cin >> size;
//    array = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        cout << "vvedite: ";cin >> array[i];
//    }
//}
//void printArray(int* array, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << array[i] << "\t";
//    }
//    cout << endl;
//}
//void formArrayB(int* a, int sizeA, int*& b, int& sizeB)
//{
//    int count = 0, j = 0;
//    for (int i = 0; i < sizeA; i++)
//    {
//        if (a[i] > 0)
//        {
//            count++;
//        }
//    }
//    sizeB = sizeA + count;
//    b = new int[sizeB];
//    for (int i = 0; i < sizeA; i++)
//    {
//        if (a[i] > 0)
//        {
//            b[j] = 0;
//            j++;
//        }
//        b[j] = a[i];
//        j++;
//    }
//}
//int main()
//{
//    int* a, * b, sizeA, sizeB;
//    inputArray(a, sizeA);
//    formArrayB(a, sizeA, b, sizeB);
//    printArray(b, sizeB);
//    delete[] b;
//    delete[] a;
//    return 0;
//}

//#5 Описать структуру c именем PROKAT, содержащую следующие поля: название товара, стоимость проката за 1 день, размер скидки.
//Написать программу, выполняющую следующие действия: 1) ввод с клавиатуры данных в массив, состоящий из 10 структур типа PROKAT; записи должны быть упорядочены по возрастанию стоимости проката. 
//2) вывод названий, стоимости проката за 1 день для всех товаров, имеющих скидку больше значения, вводимого с клавиатуры. Если таких товаров нет, то вывести соответствующее сообщение.
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct PROKAT
//{
//    string name;
//    int cost;
//    double discount;
//};
//bool uslovie(const PROKAT& p1, const PROKAT& p2)
//{
//    return p1.cost < p2.cost;
//}
//int main()
//{
//    const int n = 3;
//    PROKAT store[n];
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Nazvanie tovara: ";cin >> store[i].name;
//        cout << "Stoimost za den: ";cin >> store[i].cost;
//        cout << "skidka (%): ";cin >> store[i].discount;
//        cout << endl;
//    }
//    double discountitog;
//    sort(store, store + n, uslovie);
//    cout << "Tovar so skidkoi bolee(%): ";cin >> discountitog;
//    bool found = false;
//    for (int i = 0; i < n; i++)
//    {
//        if (store[i].discount >= discountitog)
//        {
//            cout << "Name: " << store[i].name << ", stoimost za den: " << store[i].cost << endl;
//            found = true;
//        }
//    }
//    if (found==0)
//    {
//        cout << "Net tovara so skidkoi bolee " << discountitog << endl;
//    }
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//struct PROKAT
//{
//    string name;
//    int cost;
//    double discount;
//};
//void input(PROKAT* store, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Nazvanie tovara: ";cin >> store[i].name;
//        cout << "Stoimost za den: ";cin >> store[i].cost;
//        cout << "skidka (%): ";cin >> store[i].discount;cout << endl;
//    }
//}
//void bubbleSort(PROKAT* store, int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (store[j].cost > store[j + 1].cost)
//            {
//                swap(store[j], store[j + 1]);
//            }
//        }
//    }
//}
//void output(const PROKAT* store, int n, double discountitog)
//{
//    bool found = false;
//    for (int i = 0; i < n; i++)
//    {
//        if (store[i].discount > discountitog)
//        {
//            cout << "Name: " << store[i].name << ", stoimost za den: " << store[i].cost << endl;
//            found = true;
//        }
//    }
//    if (found==false)
//    {
//        cout << "Net tovara so skidkoi bolshe " << discountitog << endl;
//    }
//}
//int main()
//{
//    const int n = 3;
//    double discountitog;
//    PROKAT store[n];
//    input(store, n);
//    bubbleSort(store, n);
//    cout << "Tovar so skidkoi bolshe(%): ";cin >> discountitog;
//    output(store, n, discountitog);
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//struct PROKAT
//{
//    string name;
//    int cost;
//    double discount;
//	PROKAT* next;
//};
//typedef PROKAT* PPROKAT;
//PPROKAT CreateNode(string new_name,int new_cost,double new_discount)
//{
//	PPROKAT NewNode = new PROKAT;
//	NewNode->name = new_name;
//	NewNode->cost = new_cost;
//	NewNode->discount = new_discount;
//	NewNode->next = NULL;
//	return NewNode;
//}
//void AddFirst(PPROKAT& Head, PPROKAT NewNode)
//{
//	NewNode->next = Head;
//	Head = NewNode;
//}
//void AddAfter(PPROKAT p, PPROKAT NewNode)
//{
//	NewNode->next = p->next;
//	p->next = NewNode;
//}
//void Addlast(PPROKAT& Head, PPROKAT NewNode)
//{
//	PPROKAT q = Head;
//	if (Head == NULL)
//	{
//		AddFirst(Head, NewNode);
//		return;
//	}
//	while (q->next)q = q->next;
//	AddAfter(q, NewNode);
//}
//PPROKAT searchnaz(PPROKAT& Head, string nname)
//{
//	PPROKAT c = Head;
//	bool f = false;
//	do
//	{
//		if (c->name == nname)
//		{
//			return c;
//			f = true;
//		}
//		c = c->next;
//	} while (c != NULL);
//	if (f == false)
//		cout << "Transporta s takim nazvaniem net!" << endl;
//}
//PPROKAT searchcost(PPROKAT& Head, int ccost)
//{
//	PPROKAT c = Head;
//	bool f = false;
//	do
//	{
//		if (c->cost == ccost)
//		{
//			return c;
//			f = true;
//		}
//		c = c->next;
//	} while (c != NULL);
//	if (f == false)
//		cout << "Transporta s takoi stoimostiu net!" << endl;
//}
//PPROKAT searchdis(PPROKAT& Head, int dis)
//{
//	PPROKAT c = Head;
//	bool f = false;
//	do
//	{
//		if (c->discount == dis)
//		{
//			return c;
//			f = true;
//		}
//		c = c->next;
//	} while (c != NULL);
//	if (f == false)
//		cout << "Transporta s takoi skidkoi net!" << endl;
//}
//void corname(PPROKAT& Head)
//{
//	PPROKAT q = Head;
//	string NAME;
//	cout << "Novoe znachemie "; cin >> NAME;
//	q->name = NAME;
//}
//void corcost(PPROKAT& Head)
//{
//	PPROKAT q = Head;
//	int COST;
//	cout << "Novoe znachemie "; cin >> COST;
//	q->cost = COST;
//}
//void cordis(PPROKAT& Head)
//{
//	PPROKAT q = Head;
//	double DIS;
//	cout << "Novoe znachemie "; cin >> DIS;
//	q->discount = DIS;
//}
//void DeleteNode(PPROKAT& Head, PPROKAT OldNode)
//{
//	PPROKAT q = Head;
//	if (Head == OldNode)
//		Head = OldNode->next;
//	else
//	{
//		while (q->next != OldNode && q != NULL)
//			q = q->next;
//		if (q == NULL) return;
//		q->next = OldNode->next;
//	}
//	delete OldNode;
//}
//PPROKAT input()
//{
//	string name;
//	int cost;
//	double discount;
//	cout << "Vvedite nazvanie " << endl; cin >> name;
//	cout << "Vvedite stoimost za den " << endl; cin >> cost;
//	cout << "Vvedite skidku(%) " << endl; cin >> discount;
//	return CreateNode(name,cost,discount);
//}
//void output(PPROKAT Head)
//{
//	PPROKAT q = Head;
//	if (q == Head)
//	{
//		cout << " " << endl;
//		cout << "Nazvanie transporta " << q->name << endl;
//		cout << "Stoimost za den " << q->cost << endl;
//		cout << "Skidka(%) " << q->discount << endl; 
//		cout << " " << endl;
//		q == NULL;
//	}
//}
//void all(PPROKAT& Head)
//{
//	PPROKAT q = Head;
//	int num = 1;
//	if (q == NULL)
//	{
//		cout << "Spisok pust!" << endl;
//	}
//	while (q != NULL)
//	{
//		cout << " " << endl;
//		cout << "Nazvanie transporta " << q->name << endl;
//		cout << "Stoimost za den " << q->cost << endl;
//		cout << "Skidka(%) " << q->discount << endl;
//		cout << " " << endl;
//		q = q->next;
//		num++;
//	}
//}
//void menu()
//{
//	cout << "0 - EXIT" << endl;
//	cout << "1 - Dobavlenie transporta" << endl;
//	cout << "2 - Udalenie transporta" << endl;
//	cout << "3 - Poisk transporta" << endl;
//	cout << "4 - Vnesti izmeneniya" << endl;
//	cout << "5 - vivod vseh dannih" << endl;
//}
//int main()
//{
//	int t = -1,t2=-1,t3=-1,t4=-1;
//	PPROKAT head = NULL;
//	do 
//	{
//		menu();
//		cin >> t;
//		switch (t)
//		{
//		case 1:
//		{
//			cout << "\n0. EXIT\n1. V nachalo spiska.\n2. V konec spiska\n3. Posle pervoi zapisi s nazvaniem _ \n";
//			cin >> t2;
//			switch (t2)
//			{
//			case 1:
//			{
//				PPROKAT NewTransport = input();
//				AddFirst(head, NewTransport);
//				cout << "Transport dobavlen!" << endl;
//				system("pause");
//				break;
//			}
//			case 2:
//			{
//				PPROKAT NewTransport = input();
//				Addlast(head, NewTransport);
//				cout << "Transport dobavlen!" << endl;
//				system("pause");
//				break;
//			}
//			case 3:
//			{
//				PPROKAT NewTransport = input();
//				string naz;
//				cout << "Vvedite nazvanie transporta" << endl; cin >> naz;
//				PPROKAT transport = searchnaz(head, naz);
//				if (transport != NULL)
//				{
//					AddAfter(transport, NewTransport);
//					cout << "Transport dobavlen!" << endl;
//				}
//				system("pause");
//				break;
//			}
//			default:
//				break;
//			}
//			break;
//		}
//		case 2:
//		{
//			if (head != NULL)
//			{
//				string naz;
//				cout << "Vvedite nazvanie transporta, kotorogo nado udalit" << endl; cin >> naz;
//				PPROKAT transport = searchnaz(head, naz);
//				if (transport != NULL)
//				{
//					DeleteNode(head, transport);
//					cout << "Transport udalena" << endl;
//				}
//			}
//			else
//				cout << "Spisok pust!" << endl;
//			system("pause");
//			break;
//		}
//		case 3:
//		{
//			cout << "\n0. EXIT\n1. Nazvanie.\n2. Stoimost\n3. Skidka \n";
//			cin >> t3;
//			switch (t3)
//			{
//			case 1:
//			{
//				string nazz;
//				cout << "Vvedite nazvanie transporta:" << endl; cin >> nazz;
//				PPROKAT transport = searchnaz(head, nazz);
//				if (transport != NULL) {
//					output(transport);
//				}
//				system("pause");
//				break;
//			}
//			case 2:
//			{
//				int costt;
//				cout << "Vvedite stoimost transporta:" << endl; cin >> costt;
//				PPROKAT transport = searchcost(head, costt);
//				if (transport != NULL) {
//					output(transport);
//				}
//				system("pause");
//				break;
//			}
//			case 3:
//			{
//				double diss;
//				cout << "Vvedite skidku transporta:" << endl; cin >> diss;
//				PPROKAT transport = searchdis(head, diss);
//				if (transport != NULL) {
//					output(transport);
//				}
//				system("pause");
//				break;
//			}
//			default:
//				break;
//			}
//			break;
//		}
//		case 4:
//		{
//			cout << "\n0. EXIT\n1. Nazvanie.\n2. Stoimost\n3. Skidka \n";
//			cin >> t4;
//			switch (t4)
//			{
//			case 1:
//			{
//				string nzv;
//				cout << "Vvedite nazvanie transporta:" << endl; cin >> nzv;
//				PPROKAT transport = searchnaz(head, nzv);
//				if (transport != NULL) {
//					corname(transport);
//				}
//				system("pause");
//				break;
//			}
//			case 2:
//			{
//				string cst;
//				cout << "Vvedite nazvanie transporta:" << endl; cin >> cst;
//				PPROKAT transport = searchnaz(head, cst);
//				if (transport != NULL) {
//					corname(transport);
//				}
//				system("pause");
//				break;
//			}
//			case 3:
//			{
//				string ds;
//				cout << "Vvedite nazvanie transporta:" << endl; cin >> ds;
//				PPROKAT transport = searchnaz(head, ds);
//				if (transport != NULL) {
//					corname(transport);
//				}
//				system("pause");
//				break;
//			}
//			default:
//				break;
//			}
//			break;
//		}
//		case 5:
//		{
//			all(head);
//			system("pause");
//			break;
//		}
//		}
//	}while (t != 0);
//}