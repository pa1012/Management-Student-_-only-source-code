#include"RenderTable.h"

void initTableClass(sf::Font &font,vector<AccountGraphic> &A, string className, ArrOfAccount Acc) {
	int n = 1;
	vector<Account> acc;
	acc = Acc.returnClass(className);
	A.clear();
	AccountGraphic ag;
	string number;
	float posY = 300;
	updateText(ag.no, font, sf::Color::White, 408, posY,15);
	updateText(ag.userName, font, sf::Color::White, 440, posY,15);
	updateText(ag.password, font, sf::Color::White, 538, posY,15);
	updateText(ag.ID, font, sf::Color::White, 713, posY,15);
	updateText(ag.lastName, font, sf::Color::White, 811, posY, 15);
	updateText(ag.firstName, font, sf::Color::White, 1151, posY, 15);
	updateText(ag.doB, font, sf::Color::White, 1260, posY, 15);
	updateText(ag.gender, font, sf::Color::White, 1390 , posY, 15);
	updateText(ag.inClass, font, sf::Color::White, 1490, posY, 15);
	ag.no.setString("No");
	ag.userName.setString("Username");
	ag.password.setString("Password");
	ag.ID.setString("ID");
	ag.lastName.setString("Last name");
	ag.firstName.setString("First name");
	ag.doB.setString("DoB");
	ag.gender.setString("Gender");
	ag.inClass.setString("Class");


	A.push_back(ag);
	
	for (int i = 0; i < acc.size(); i++) {
		
		convertIntToString(n, number);
		ag.no.setString(number);
		ag.doB.setString(acc[i].getDate());
		ag.firstName.setString(acc[i].getFirstName());
		ag.lastName.setString(acc[i].getLastName());
		if (acc[i].getGender() == 0) {
			ag.gender.setString("Male");
		}
		else ag.gender.setString("Female");
		ag.userName.setString(acc[i].getUsername());
		ag.password.setString(acc[i].getPassword());
		ag.ID.setString(acc[i].getID());
		ag.inClass.setString(className);
		n++;
		posY = posY + 30;
		updateText(ag.no, font, sf::Color::White, 408, posY, 15);
		updateText(ag.userName, font, sf::Color::White, 440, posY, 15);
		updateText(ag.password, font, sf::Color::White, 538, posY, 15);
		updateText(ag.ID, font, sf::Color::White, 713, posY, 15);
		updateText(ag.lastName, font, sf::Color::White, 811, posY, 15);
		updateText(ag.firstName, font, sf::Color::White, 1151, posY, 15);
		updateText(ag.doB, font, sf::Color::White, 1260, posY, 15);
		updateText(ag.gender, font, sf::Color::White, 1390, posY, 15);
		updateText(ag.inClass, font, sf::Color::White, 1490, posY, 15);
		A.push_back(ag);
	}
	return;
}

void renderTableClass(sf::RenderWindow &window, vector<AccountGraphic> A)
{
	
	for (int i = 0; i < A.size(); i++)
	{
		window.draw(A[i].no);
		window.draw(A[i].userName);
		window.draw(A[i].password);
		window.draw(A[i].ID);
		window.draw(A[i].lastName);
		window.draw(A[i].firstName);
		window.draw(A[i].doB);
		window.draw(A[i].gender);
		window.draw(A[i].inClass);
	}
}

void initTableCourse(sf::Font & font, vector<CourseGraphic> &A, ArrayOfCourse Arr) {
	int n = 1;
	vector<Course> arr;
	arr = Arr.returnCourses();
	A.clear();
	CourseGraphic ag;
	string number;
	float posY = 300;
	updateText(ag.no, font, sf::Color::White, 408, posY, 15);
	updateText(ag.ID, font, sf::Color::White, 440, posY, 15);
	updateText(ag.name, font, sf::Color::White, 530, posY, 15);
	updateText(ag.lecture, font, sf::Color::White, 852, posY, 15);
	updateText(ag.inYear, font, sf::Color::White, 1030, posY, 15);
	updateText(ag.semester, font, sf::Color::White, 1150, posY, 15);
	updateText(ag.startDate, font, sf::Color::White, 1232, posY, 15);
	updateText(ag.endDate, font, sf::Color::White, 1340, posY, 15);
	updateText(ag.dayOfWeek, font, sf::Color::White, 1450, posY, 15);
	updateText(ag.start, font, sf::Color::White, 1514, posY, 15);
	updateText(ag.end, font, sf::Color::White, 1600, posY, 15);
	updateText(ag.room, font, sf::Color::White, 1700, posY, 15);
	ag.no.setString("No");
	ag.ID.setString("ID");
	ag.name.setString("Course name");
	ag.lecture.setString("Lecturer name");
	ag.inYear.setString("Years");
	ag.semester.setString("Term");
	ag.startDate.setString("Start Date");
	ag.endDate.setString("End Date");
	ag.dayOfWeek.setString("Day");
	ag.start.setString("Start Hour");
	ag.end.setString("End Hour");
	ag.room.setString("Room");

	A.push_back(ag);

	for (int i = 0; i < arr.size(); i++)
	{
		string number = "";
		convertIntToString(n, number);
		ag.name.setString(arr[i].getName());
		ag.no.setString(number);
		ag.ID.setString(arr[i].getID());
		ag.lecture.setString(arr[i].getLecture());
		ag.inYear.setString(arr[i].getYear());
		string term = "";
		convertIntToString(arr[i].getSemester(), term);
		ag.semester.setString(term);
		ag.startDate.setString(arr[i].getStartDate());
		ag.endDate.setString(arr[i].getEndDate());
		ag.dayOfWeek.setString(arr[i].getDayOfWeek());
		ag.start.setString(arr[i].getStart());
		ag.end.setString(arr[i].getEnd());
		ag.room.setString(arr[i].getRoom());
		n++;
		posY = posY + 35;
		updateText(ag.no, font, sf::Color::White, 408, posY, 15);
		updateText(ag.ID, font, sf::Color::White, 440, posY, 15);
		updateText(ag.name, font, sf::Color::White, 530, posY, 15);
		updateText(ag.lecture, font, sf::Color::White, 852, posY, 15);
		updateText(ag.inYear, font, sf::Color::White, 1030, posY, 15);
		updateText(ag.semester, font, sf::Color::White, 1150, posY, 15);
		updateText(ag.startDate, font, sf::Color::White, 1232, posY, 15);
		updateText(ag.endDate, font, sf::Color::White, 1340, posY, 15);
		updateText(ag.dayOfWeek, font, sf::Color::White, 1450, posY, 15);
		updateText(ag.start, font, sf::Color::White, 1514, posY, 15);
		updateText(ag.end, font, sf::Color::White, 1600, posY, 15);
		updateText(ag.room, font, sf::Color::White, 1700, posY, 15);
		A.push_back(ag);
	}
	return;
}

void renderTableCourse(sf::RenderWindow &window, vector<CourseGraphic> A)
{

	for (int i = 0; i < A.size(); i++)
	{
		window.draw(A[i].no);
		window.draw(A[i].ID);
		window.draw(A[i].name);
		window.draw(A[i].lecture);
		window.draw(A[i].inYear);
		window.draw(A[i].semester);
		window.draw(A[i].startDate);
		window.draw(A[i].endDate);
		window.draw(A[i].dayOfWeek);
		window.draw(A[i].start);
		window.draw(A[i].end);
		window.draw(A[i].room);
	}
}

void initTableCourse_Student(sf::Font & font, vector<StudentGraphic> &A, string courseName, ArrOfAccount Std) {
	int n = 1;
	vector<Account> std;
	std = Std.returnStudent(courseName);
	A.clear();
	StudentGraphic ag;
	string number;
	float posY = 300;
	updateText(ag.no, font, sf::Color::White, 408, posY, 15);
	updateText(ag.ID, font, sf::Color::White, 440, posY, 15);
	updateText(ag.lastName, font, sf::Color::White, 570, posY, 15);
	updateText(ag.firstName, font, sf::Color::White, 880, posY, 15);
	updateText(ag.Class, font, sf::Color::White, 1040, posY, 15);

	ag.no.setString("No");
	ag.lastName.setString("Last name");
	ag.firstName.setString("First name");
	ag.ID.setString("ID");
	ag.Class.setString("Class");

	A.push_back(ag);

	for (int i = 0; i < std.size(); i++) {

		convertIntToString(n, number);
		ag.no.setString(number);
		ag.firstName.setString(std[i].getFirstName());
		ag.lastName.setString(std[i].getLastName());
		ag.ID.setString(std[i].getID());
		ag.Class.setString(std[i].getinClass());
		n++;
		posY = posY + 25;

		updateText(ag.no, font, sf::Color::White, 408, posY, 15);
		updateText(ag.ID, font, sf::Color::White, 440, posY, 15);
		updateText(ag.lastName, font, sf::Color::White, 570, posY, 15);
		updateText(ag.firstName, font, sf::Color::White, 880, posY, 15);
		updateText(ag.Class, font, sf::Color::White, 1040, posY, 15);

		A.push_back(ag);
	}
	return;
}

void renderTableCourse_Student(sf::RenderWindow &window, vector<StudentGraphic> A)
{

	for (int i = 0; i < A.size(); i++)
	{
		window.draw(A[i].no);
		window.draw(A[i].lastName);
		window.draw(A[i].firstName);
		window.draw(A[i].ID);
		window.draw(A[i].Class);
	}
}