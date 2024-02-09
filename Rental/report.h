#ifndef REPORT_H
#define REPORT_H
#include <iostream>
using namespace std;

class Report
{
private:
    int ReportID;
    string ReportName;

public:
    Report(int newReportID, string newReportName);
    int getReportID();
    string getReportName();

    void setReportID(int newReportID);
    void setReportName(string newReportName);
    void viewCustomerReport(int);
    void viewTitleReport(int);
};

#endif // REPORT_H
