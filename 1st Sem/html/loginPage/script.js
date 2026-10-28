function checkLogin(event) {
    event.preventDefault();

    let email = document.getElementById("email");
    let password = document.getElementById("password");
    let stayIn = document.getElementById("stayIn");
    const message = document.getElementById("message");

    const correctEmail = "admin@gmail.com";
    const correctPassword = "12345678";

    if (email.value === correctEmail && password.value === correctPassword) {
        console.log("Login successful!");
        message.textContent = " ";
        if (stayIn.checked) {
            console.log("Stay signed in");
        } else {
            console.log("Don't stay signed in");
        }
    } else {
        message.textContent = "Your username or password is incorrect. Please try again.";
        message.style.color = "#d038ff";
        email.style.borderColor = "#d038ff";
        password.style.borderColor = "#d038ff";
        email.style.backgroundColor = "#f6d9ff";
        password.style.backgroundColor = "#f6d9ff";
    }
}
