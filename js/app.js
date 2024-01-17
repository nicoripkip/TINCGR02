const canvas = document.getElementById("screen");
const context = canvas.getContext("webgl");


const black = [0.0, 0.0, 0.0, 1.0];


function main() 
{
    if (context == null) {
        console.log("This browser does not support webgl");
        return;
    }

    context.clearColor(...black);
    context.clear(context.COLOR_BUFFER_BIT);
}


main();
