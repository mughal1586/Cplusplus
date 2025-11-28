#include<iostream>
#include<string>
using namespace std;

struct book {
	string name;
	int price = 0;
	int ISBN = 0;
	int stock = 0;
	void AddNewBook();
	void ShowAllBooks();
};
const int maxindex = 10;
book b[maxindex];
int index = 3;

struct sales {
	string bookName;
	int QuantitySold = 0;
	int PricePerBook = 0;
	int TotalPrice = 0;
};
const int MaxSalesIndex = 10;
sales salesData[MaxSalesIndex];
int salesIndex = 0;
int Revenue = 0;

void checkforadmin();
void admin();
void user();
void ManageInventory();
int searchBook();
void sellBook();
void generateReceipt(string, int, int, int);
void salesRecord(string, int, int);
void View_Sales_Revenue();


int main() {

	b[0] = { "C++", 1000, 12345, 10 };
	b[1] = { "HTML", 600, 67890, 9 };
	b[2] = { "CSS", 800, 15790, 7 };

	checkforadmin();

	return 0;
}


/*********************************** -- Checking for Admin/User -- ****************************************/

void checkforadmin() {
	int adminoruser;
	string adminname = "Muhammad", username = "Sagheer", adminpassword = "iamadmin", userpassword = "iamuser";
	string checkadmin, checkuser, checkadminp, checkuserp;
	cout << "You identify as :-" << endl;
	cout << "1 . Admin" << endl;
	cout << "2 . User" << endl;

	cout << "Choose = ";
	cin >> adminoruser;

	cout << "\n";
	//     if selection is admin

	if (adminoruser == 1) {
		cout << "Enter name = " << endl;
		cin >> checkadmin;
		cout << "Password = " << endl;
		cin >> checkadminp;

		//     Verifying Admin name and password

		if (adminname == checkadmin && adminpassword == checkadminp) {
			admin();   //     Function of admin
		}
		else {
			cout << "\nInvalid Name or Password !!!\nTry Again !" << endl;
			return checkforadmin();
		}

	}

	//     if selection is user

	else if (adminoruser == 2) {
		cout << "Enter Username = " << endl;
		cin >> checkuser;
		cout << "Password = " << endl;
		cin >> checkuserp;

		if (username == checkuser && userpassword == checkuserp) {
			user();   //      Function of User
		}
		else {
			cout << "Invalid Username or Password !!!\nTry Again !" << endl;
			return checkforadmin();
		}

	}
	else {
		cout << "Invalid Entry !!!" << endl;
	}

}

/*********************************** -- Function for Admin -- ****************************************/

void admin() {
	int whattodo;

	cout << "1 . Add New Book" << endl;
	cout << "2 . View all books" << endl;
	cout << "3 . Manage Inventory" << endl;
	cout << "4 . View Sales and Revenue" << endl;
	cout << "5 . Exit" << endl;

	cout << " Select What to do = ";
	cin >> whattodo;

	cout << "\n";


	if (whattodo == 1) {
		//   Function that Add New Book
		char whatyouwant = 'N';

		do {

			b[index].AddNewBook();

			cout << "You want to add another book (Y/N) = " << endl;
			cin >> whatyouwant;
		} while (toupper(whatyouwant) == 'Y');

		cout << "\n";

		b[index].ShowAllBooks();

		index++;
		cout << "\n";
		return admin();
	}
	else if (whattodo == 2) {
		//   Function that Show all books
		for (int i = 0; i < index; i++) {
			b[i].ShowAllBooks();
		}
		return admin();
	}
	else if (whattodo == 3) {
		//   Function that Manage Inventory
		ManageInventory();

		return admin();
	}

	else if (whattodo == 4) {
		//   Function that Show Sales and Revenue
		View_Sales_Revenue();

		return admin();
	}
	else if (whattodo == 5) {
		cout << "\a";
		return;
	}
	else {
		cout << "\aInvalid Entry !!!" << endl;
	}

}

/*********************************** -- Function for User -- ****************************************/

void user() {
	int whattodo;
	cout << "1 . Check availability of books" << endl;
	cout << "2 . Sell book to customer" << endl;
	cout << "3 . View sales history " << endl;
	cout << "4 . Exit" << endl;

	cout << "Select what to do = ";
	cin >> whattodo;

	cout << "\n";


	if (whattodo == 1) {
		//   Function that Check availability of books
		int indexgiven = 0;
		cout << "\t\t*** - For Finding a Book - ***" << endl;

		indexgiven = searchBook(); //calling function to search a book 

		if (indexgiven == -1) {
			cout << "\t\t\aBook Not Found !!!" << endl;
		}
		else {
			cout << "\t\tBook Found\1" << endl;

			b[indexgiven].ShowAllBooks();
		}
		return user();
	}
	else if (whattodo == 2) {
		//   Function that Sell book to customer
		sellBook();
		return user();
	}
	else if (whattodo == 3) {
		//   Function that View sales history 
		View_Sales_Revenue();
		return user();
	}
	else if (whattodo == 4) {
		cout << "\a";
		return;
	}
	else {
		cout << "\aInvalid Entry !!!" << endl;
	}

}

/*********************************** -- Adding New Book -- ****************************************/

void book::AddNewBook() {

	if (index < maxindex) {
		cin.ignore();
		cin.clear();
		cout << "Enter book name = " << endl;
		getline(cin, name);

		cin.ignore();
		cin.clear();

		cout << "Enter price = " << endl;
		cin >> price;
		if (price <= 0) {
			cout << "\aInvalid Price !!!\nTry Again" << endl;
			return AddNewBook();
		}

		cout << "\nEnter ISBN no = " << endl;
		cin >> ISBN;

		for (int i = 0; i < index; i++) {
			if (b[i].ISBN == ISBN) {
				cout << "\a\t\tISBN Exsist !!!\nTry Again" << endl;
				return AddNewBook();
			}
		}
		cout << "\nStock Available = " << endl;
		cin >> stock;
		if (stock <= 0) {
			cout << "\a\t\tInvalid Stock Input !!!\nTry Again" << endl;
			return AddNewBook();
		}
		cout << " \a\t\t\tBook Added Successfully \1" << endl;
	}
	else {
		cout << "\a\t\tLimit Exceed !!!" << endl;
		cout << "\a\t\tWe have no more space" << endl;
	}
}

/*********************************** -- Showing All Books -- ***********************************/

void book::ShowAllBooks() {
	cout << endl;
	cout << "\t\tBook name = " << name << endl;
	cout << "\t\tPrice = " << price << endl;
	cout << "\t\tISBN no = " << ISBN << endl;
	cout << "\t\tStock Available = " << stock << endl;
	cout << endl;
}

/*********************************** -- Managing Inventory -- ***********************************/

void ManageInventory() {
	int givenindex = 0;
	int whatyouwant = 0;
	int newprice = 0;
	int updatedstock = 0;

	cout << "\t\tView all books to manage inventory easily" << endl;

	for (int i = 0; i < index; i++) {
		b[i].ShowAllBooks();
	}

	cout << "\t\t*** - For Editing Book Information - ***" << endl;

	givenindex = searchBook();  // calling function to search a book

	if (givenindex != -1) {
		cout << "\t\tBook found\1";
		b[givenindex].ShowAllBooks();
		cout << "1 . Change Price" << endl;
		cout << "2 . Update Stock" << endl;

		cout << "\nWhat do you wnat to change/update = ";
		cin >> whatyouwant;
		cout << endl;

		if (whatyouwant == 1) {
			cout << "Enter new price = " << endl;
			cin >> newprice;
			if (newprice <= 0) {         //Checking if the New Price is correct or not
				cout << "\t\t\aPrice Should be greater than zero !!!" << endl;
				return ManageInventory();
			}
			b[givenindex].price = newprice;
			cout << "Updated stock = " << endl;
			b[givenindex].ShowAllBooks();
			return admin();
		}
		else if (whatyouwant == 2) {
			cout << "Enter Stock available now = " << endl;
			cin >> updatedstock;
			if (updatedstock < 0) {       //Checking if the Updated Stock is correct or not
				cout << "\t\t\aInvalid Input !!!" << endl;
				cout << "\t\t\aStock can't be in negative" << endl;
				return ManageInventory();
			}
			b[givenindex].stock = updatedstock;

			cout << "Updated stock = " << endl;
			b[givenindex].ShowAllBooks();
			return admin();
		}
		else {
			cout << "\t\tYou have entered Wrong Input !!!" << endl;
			return ManageInventory();
		}
	}
	else {
		cout << "\t\tBook Not Found !!!" << endl;
	}
}
/*********************************** -- Searching a Book -- ***********************************/

int searchBook() {

	int checkISBN = 0;
	cout << "Enter ISBN no of book = " << endl;
	cin >> checkISBN;

	for (int i = 0; i < index; i++) {
		if (b[i].ISBN == checkISBN) {
			return i;
		}
	}
	return -1;
}

/*********************************** -- Selling a Book -- ***********************************/

void sellBook() {

	int bookindex = searchBook();

	int checkstock = 0;
	if (bookindex == -1) {
		cout << "Book NOT Found !!!" << endl;
	}
	else {

		b[bookindex].ShowAllBooks();

		cout << "How many you want = " << endl;
		cin >> checkstock;

		if (b[bookindex].stock >= checkstock) {
			char ch;
			cout << "Do you want to generate receipt (Y/N) = " << endl;
			cin >> ch;

			b[bookindex].stock = b[bookindex].stock - checkstock;
			int total = checkstock * b[bookindex].price;

			salesRecord(b[bookindex].name, checkstock, b[bookindex].price); //Saving Sales Record

			if (ch == 'Y' || ch == 'y') {
				// Function to Generate Receipt
				generateReceipt(b[bookindex].name, checkstock, b[bookindex].price, total);
			}

			cout << "\n\t\t\a Book Sold \1\n" << endl;
		}
		else {
			cout << "\t\tSorry !!!\n\t\tWe don't have that much stock available\n" << endl;
		}
		return user();
	}

}

/*********************************** -- Generating Receipt -- ***********************************/

void generateReceipt(string NameofBook, int checkstock, int price, int total) {

	cout << "\t\t\t _____________________________________________________________" << endl;
	cout << "\t\t\t|-------------------- *** OLD BOOK SHOP *** ------------------|" << endl;
	cout << "\t\t\t|-------------------------------------------------------------|" << endl;
	cout << "\t\t\t|--Book Name---------------------------|--Qty------|---Price--|" << endl;
	cout << "\t\t\t     " << NameofBook << "                                 " << checkstock << "          " << price << "   " << endl;
	cout << "\t\t\t|                                      |           |          |" << endl;
	cout << "\t\t\t|                                      |           |          |" << endl;
	cout << "\t\t\t|                                      |           |          |" << endl;
	cout << "\t\t\t|-------------------------------------------------------------|" << endl;
