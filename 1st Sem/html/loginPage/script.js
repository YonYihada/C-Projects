function checkLogin(event) {
    event.preventDefault();

    let email = document.getElementById("email");
    let password = document.getElementById("password");
    let stayIn = document.getElementById("stayIn");
    const message = document.getElementById("message");

    const correctEmail = "admin@gmail.com";
    const correctPassword = "12345678";
    
    const originalColor = "#eeeeee";
    const purple = "#cd6aeb";

    function setColors(outlineColor) {
        message.style.color = outlineColor;
        email.style.borderColor = outlineColor;
        password.style.borderColor = outlineColor;
    }
    
    if (email.value === correctEmail && password.value === correctPassword) {
        console.log("Login successful!");
        setColors(originalColor);
        message.textContent = " ";
        if (stayIn.checked) {
            console.log("Stay signed in");
        } else {
            console.log("Don't stay signed in");
        }
    } else {
        message.textContent = "Your username or password is incorrect. Please try again.";
        setColors(purple);
        email.style.borderWidth = "2px";
        password.style.borderWidth = "2px";
    }
}
