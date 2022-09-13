using namespace std;

class Date
{
	public:
		Date ( int mm, int dd, int yy);
		void setMonth (int mm);
		int getMonth();
		void setDay (int dd);	
		int getDay();
		void setYear (int yy);
		int getYear();
		void displayDate();
	private:
		int month;
		int day;
		int year;
};