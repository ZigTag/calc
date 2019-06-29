use std::io;

struct Input {
    x: f64,
    y: f64,
}

impl Input {
    fn add(&self) -> f64 {
        self.x + self.y
    }

    fn subtract(&self) -> f64 {
        self.x - self.y
    }

    fn multiply(&self) -> f64 {
        self.x * self.y
    }

    fn divide(&self) -> f64 {
        self.x / self.y
    }
}

fn ask_operator() -> char {
    let mut operator = String::new();

    println!("Please enter the operator you would like to use:\n\
              Type h for help.");

    io::stdin().read_line(&mut operator)
        .expect("Cannot read line");

    let operator = operator.trim().parse()
        .expect("Please enter a char (operator)");

    operator
}

fn ask_float() -> f64 {
    let mut answer = String::new();

    println!("Please enter a float: ");

    io::stdin().read_line(&mut answer)
        .expect("Cannot read line.");

    let answer: f64 = answer.trim().parse()
        .expect("Please enter a char (operator)");

    answer
}

fn main() {
    let operator = ask_operator();

    if operator == '+' {
        let numbers = Input { x: ask_float(), y: ask_float() };
        println!("{} {} {} = {}", numbers.x, operator, numbers.y, numbers.add());
    }

    else if operator == '-' {
        let numbers = Input { x: ask_float(), y: ask_float() };
        println!("{} {} {} = {}", numbers.x, operator, numbers.y, numbers.subtract());
    }

    else if operator == '*' {
        let numbers = Input { x: ask_float(), y: ask_float() };
        println!("{} {} {} = {}", numbers.x, operator, numbers.y, numbers.multiply());
    }

    else if operator == '/' {
        let numbers = Input { x: ask_float(), y: ask_float() };
        println!("{} {} {} = {}", numbers.x, operator, numbers.y, numbers.divide());
    }

    else {
        println!("The available operators are\n\
                  \t\t\t\tOperator\n\
                  Addition\t\t+\n\
                  Subtraction\t\t-\n\
                  Multiplication\t*\n\
                  Division\t\t/")
    }
}