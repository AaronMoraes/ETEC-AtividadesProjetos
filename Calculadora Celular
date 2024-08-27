<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora</title>
    <style type="text/css">
</head>
<body>
    body {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background-color: #f5f5f5;
    overflow: hidden;
    font-family: Arial, sans-serif;
}

.calculadora {
    width: 320px;
    background-color: #d3cece;
    border-radius: 10px;
    padding: 20px;
}

.display {
    height: 60px;
    background-color: #333;
    color: #fff;
    font-size: 36px;
    text-align: right;
    padding: 10px;
    border-radius: 5px;
    margin-bottom: 20px;
    box-sizing: border-box;
    overflow: hidden;
}

.buttons{
    display: grid;
    grid-template-columns: repeat(4,3fr);
    gap: 1em;
    align-items: end;
}

button{
    height: 50px;
    font-size: 18px;
    background-color: #333;
    color: #fff;
    border: none;
    border-radius: 10px;
    cursor: pointer;
    padding: 20px;
}
button:hover{
    background-color: #000;
}

#apagar{
    background-color: orange;

   
}
#apagar:hover{
    background-color: orangered;
    
}
 
#resultado:hover{
    background-color: darkgreen;
}
</style>

    
    <div class = "calculadora">
        <div id = "display" class="display"></div>
   
            <div class="buttons">
                <button id="apagar">AC</button>
                <button>/</button>
                <div></div>
                <div></div>
                <button>7</button>
                <button>8</button>
                <button>9</button>
                <button>x</button>
                <button>4</button>
                <button>5</button>
                <button>6</button> 
                <button>-</button>
                <button>1</button>
                <button>2</button>
                <button>3</button>
                <button>+</button>
                <button>0</button>
                <button>.</button>
                <button id = "resultado">=</button>
            </div>
            </div>
    </div>
    
    <script>
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
    if (op === 'AC') {
        currentValue = '0';
        previousValue = null;
        operator = null;
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
    if (operator === 'x') return prev * curr;
    if (operator === '/') return prev / curr;
    return curr;
}
</script>
</body>
</html>
