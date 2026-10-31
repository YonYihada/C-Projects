function checkLogin(event) {
    event.preventDefault();

    const email = document.getElementById("email");
    const password = document.getElementById("password");
    const stayIn = document.getElementById("stayIn");
    const message = document.getElementById("message");

    const correctEmail = "admin@gmail.com";
    const correctPassword = "password";
    
    const originalColor = "#eeeeee";
    const purple = "#cd6aeb";

    function setColors(outlineColor) {
        email.style.borderColor = outlineColor;
        password.style.borderColor = outlineColor;
    }
    
    if (email.value === correctEmail && password.value === correctPassword) {
        setColors(originalColor);
        message.textContent = " ";
        if (stayIn.checked) {
            console.log("Log in Success! Stay signed in");
        } else {
            console.log("Log in Success! Don't stay signed in");
        }
    } else {
        console.log("Login failure!");
        message.textContent = "Your username or password is incorrect. Please try again.";
        setColors(purple);
        email.style.borderWidth = "2px";
        password.style.borderWidth = "2px";
    }
}
