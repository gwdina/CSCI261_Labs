/* CSCI 261 Assignment 3: A3 - Sprockets R Us
* Author: Gordon Dina
* Skip Days Used: 0
* Skip Days Remaining: 5
* Resources used ():
*     /
*
*
* read in the product information from the external file, ask the user how many items they wish to purchase, and then write out an order receipt onto a new file
*/


#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ifstream outFS;
    outFS.open("product_public.txt");
    double price_per_individual_unit;
    double sales_tax_percentage_rate;
    double shipping_min_1;
    double shipping_min_2;
    double shipping_min_3;
    double flat_shipping_rate1;
    double flat_shipping_rate2;
    double flat_shipping_rate3;
    double free_shipping_min;



    if ( outFS.fail() ) {
        cerr << "Error opening input file";
        return -1;
    }
    outFS >> price_per_individual_unit;
    outFS >> sales_tax_percentage_rate;
    outFS >> shipping_min_1;
    outFS >> flat_shipping_rate1;
    outFS >> shipping_min_2;
    outFS >> flat_shipping_rate2;
    outFS >> shipping_min_3;
    outFS >> flat_shipping_rate3;
    outFS >> free_shipping_min;
    // gets variables
    outFS.close();



    //    cout << price_per_individual_unit;
    //    cout << sales_tax_percentage_rate;
    //    cout << shipping_min_1 << " ";
    //    cout << flat_shipping_rate1 << endl;
    //    cout << shipping_min_2 << " ";
    //    cout << flat_shipping_rate2 << endl;
    //    cout << shipping_min_3 << " ";
    //    cout << flat_shipping_rate3<< endl;
    //    cout << free_shipping_min;

    cout << "Welcome to Sprockets-R-Us!\n" << "We sell round sprockets, square sprockets, and triangle sprockets.";
    cout << "The cost of a single sprocket is $1.99.\n" << "How many sprockets do you wish to order?";
    int amount;
    cout << endl << "> ";
    cin >> amount;
    cout << "Thank you for your order of " << amount << " sprockets!  One moment while we prepare your receipt...";
    // welcomes customer, ask for input for rockets


    double productTotal;
    double shippingFee;
    double beforeTax;
    double salesTax;
    char wish;
    double donation;
    double totalSales;

    // Gives the Unit Subtotal, the shipping fee, then adds them up to get the before sales tax, then finds the sales tax through mutlipliaction, then adds that up with the before tax to get the total
    productTotal = amount * price_per_individual_unit;

    if ((productTotal >= shipping_min_1) && (productTotal < shipping_min_2)) {
        shippingFee = flat_shipping_rate1;
        beforeTax = productTotal + shippingFee;
        salesTax = beforeTax * (sales_tax_percentage_rate / 100);
        totalSales = beforeTax + salesTax;
    }
    else if ((productTotal >= shipping_min_2) && (productTotal < shipping_min_3)) {
        shippingFee = flat_shipping_rate2;
        beforeTax = productTotal + shippingFee;
        salesTax = beforeTax * (sales_tax_percentage_rate / 100);
        totalSales = beforeTax + salesTax;
    }
    else if ((productTotal >= shipping_min_3) && (productTotal < free_shipping_min)) {
        shippingFee = flat_shipping_rate3;
        beforeTax = productTotal + shippingFee;
        salesTax = beforeTax * (sales_tax_percentage_rate / 100);
        totalSales = beforeTax + salesTax;
    }
    else if (productTotal >= free_shipping_min) {
        shippingFee = 0.00;
        beforeTax = productTotal + shippingFee;
        salesTax = beforeTax * (sales_tax_percentage_rate / 100);
        totalSales = beforeTax + salesTax;
        cout << endl << "Congratulations!  You qualified for free shipping.";
    }



    donation = ceil(totalSales) - totalSales; // use to ask for donation
    if (donation < .005) {
        totalSales = totalSales;
    }
    else {
        cout << endl << "Do you wish to make a donation to the Human Fund? (Y/N)";
        cout << endl << "> ";
        cin >> wish;
        if (wish == 'Y') {
            totalSales = totalSales + donation;
        }
        else {
            totalSales = totalSales;
        }
    }

    cout << "Thank you for your order.  Your total is $" << setprecision(2) << fixed << totalSales;









    //receipt file
    ofstream receipt("receipt.txt");
    if ( receipt.fail() ) {
        cerr << "Error opening output file";
        return -2;
    }

    // gets the frame beginning and gives out the unit price and amount ordered
    cout << endl << endl << setfill('-') << setw(29) << "";
    cout << endl << "Sprockets-R-Us Order Receipt" << endl;
    cout << setfill('-') << setw(29) << "";
    cout << endl << "Price Per Unit:" << setfill(' ') << setw(10) << "$" << price_per_individual_unit;
    cout << endl << "Quantity Ordered:" << setfill(' ') << setw(12) << amount;



    //checks productTotal and gives out the right spacing needed for the receipt
    if (productTotal < 10) {
        cout << endl << "Unit Subtotal:" << setfill(' ') << setw(11) << "$" << productTotal;
    }
    else if ((productTotal > 10) && (productTotal < 100)) {
        cout << endl << "Unit Subtotal:" << setfill(' ') << setw(10) << "$" << productTotal;
    }
    else if ((productTotal > 100) && (productTotal < 1000)) {
        cout << endl << "Unit Subtotal:" << setfill(' ') << setw(9) << "$" << productTotal;
    }
    else if ((productTotal > 1000) && (productTotal < 10000)) {
        cout << endl << "Unit Subtotal:" << setfill(' ') << setw(8) << "$" << productTotal;
    }
    else if ((productTotal > 10000) && (productTotal < 100000)) {
        cout << endl << "Unit Subtotal:" << setfill(' ') << setw(7) << "$" << productTotal;
    }


    // since shipping fee is zero if it's free then a different format is produced for spacing
    cout << endl << setfill('-') << setw(29) << "";
    if (productTotal >= free_shipping_min) {
        cout << endl << "Shipping Fee:" << setfill(' ') << setw(12) << "$" << shippingFee;
    }
    else {
        cout << endl << "Shipping Fee:" << setfill(' ') << setw(11) << "$" << shippingFee;
    }


    cout << endl << setfill('-') << setw(29) << "";


    //same as the productTotal, gets the right spacing for sales Tax on the receipt
    if (salesTax < 10) {
        cout << endl << "Sales Tax ( 6.75%):" << setfill(' ') << setw(6) << "$" << salesTax;
    }
    else if ((salesTax > 10) && (salesTax < 100)) {
        cout << endl << "Sales Tax ( 6.75%):" << setfill(' ') << setw(5) << "$" << salesTax;
    }
    else if ((salesTax > 100) && (salesTax < 1000)) {
        cout << endl << "Sales Tax ( 6.75%):" << setfill(' ') << setw(4) << "$" << salesTax;
    }
    else if ((salesTax > 1000) && (salesTax < 10000)) {
        cout << endl << "Sales Tax ( 6.75%):" << setfill(' ') << setw(3) << "$" << salesTax;
    }
    else if ((salesTax > 10000) && (salesTax < 100000)) {
        cout << endl << "Sales Tax ( 6.75%):" << setfill(' ') << setw(2) << "$" << salesTax;
    }


    cout << endl << setfill('-') << setw(29) << "";

    cout << endl << "Donation?" << setfill(' ') << setw(20) << wish;

    cout << endl << setfill('=') << setw(29) << "";

    //Same as productTotal and Sales tax, gets the right spacing for total sales on the receipt
    if ((totalSales > 10) && (totalSales < 100)) {
        cout << endl << "Grand Total:" << setfill(' ') << setw(12) << "$"  << totalSales;
    }
    else if ((totalSales > 100) && (totalSales < 1000)) {
        cout << endl << "Grand Total:" << setfill(' ') << setw(11) << "$"  << totalSales;
    }
    else if ((totalSales > 1000) && (totalSales < 10000)) {
        cout << endl << "Grand Total:" << setfill(' ') << setw(10) << "$"  << totalSales;
    }
    else if ((totalSales > 10000) && (totalSales < 100000)) {
        cout << endl << "Grand Total:" << setfill(' ') << setw(9) << "$"  << totalSales;
    }

    // cout << endl << "Grand Total:" << setfill(' ') << setw(12) << "$"  << totalSales;

    cout << endl << setfill('=') << setw(29) << "";

    receipt.close();

    return 0;
}