CREATE TABLE IF NOT EXISTS financial_advisor(
    employee_id INT(11) PRIMARY KEY AUTOINCREMENT,
    employee_password VARCHAR(255) NOT NULL,
    employee_fname  VARCHAR(255) NOT NULL,
    employee_lname VARCHAR(255) NOT NULL
)

CREATE TABLE IF NOT EXISTS stocks(
    stock_id INT(11) PRIMARY KEY,
    purchase_price FLOAT(20) NOT NULL,
    quantity_purchased INT(11) NOT NULL,
    ticker_symbol VARCHAR(255) NOT NULL
    customer_id INT(11) NOT NULL,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
)

CREATE TABLE IF NOT EXISTS customer(
    customer_id INT(11) PRIMARY KEY,
    customer_password VARCHAR(255) NOT NULL,
    customer_fname VARCHAR(255) NOT NULL,
    customer_lname VARCHAR(255) NOT NULL,
    financial_advisor INT(11) NOT NULL,
    stock_collections INT(11) NOT NULL,
    FOREIGN KEY (financial_advisor) REFERENCES financial_advisor(employee_id)
)