const display = document.getElementById('display');
const buttons = document.querySelectorAll('button');
let currentValue = '0';
let operator = null;
let previousValue = null;

buttons.forEach(button => {
    button.addEventListener('click', () => {
        const buttonText = button.textContent;

        if (!isNaN(buttonText) || buttonText === '.') {
            handleNumber(buttonText);
        } else {
            handleOperator(buttonText);
        }

        display.textContent = currentValue;
    });
});

function handleNumber(number) {
    if (currentValue === '0' && number !== '.') {
        currentValue = number;
    } else if (number === '.' && currentValue.includes('.')) {
        return;
    } else {
        currentValue += number;
    }
}

function handleOperator(op) {
    if (op === 'C') {
        currentValue = '0';
        previousValue = null;
        operator = null;
    } else if (op === '←') {
        currentValue = currentValue.slice(0, -1) || '0';
    } else if (op === '=') {
        if (previousValue !== null && operator !== null) {
            currentValue = String(performCalculation());
            previousValue = null;
            operator = null;
        }
    } else {
        if (previousValue === null) {
            previousValue = currentValue;
            currentValue = '0';
        } else if (operator !== null) {
            currentValue = String(performCalculation());
            previousValue = currentValue;
            currentValue = '0';
        }
        operator = op;
    }
}

function performCalculation() {
    const prev = parseFloat(previousValue);
    const curr = parseFloat(currentValue);
    if (operator === '+') return prev + curr;
    if (operator === '-') return prev - curr;
    if (operator === '*') return prev * curr;
    if (operator === '/') return prev / curr;
    return curr;
}
