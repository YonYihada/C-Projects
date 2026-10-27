function checkLogin(event) {
    event.preventDefault();

    let email = document.getElementById("email").value;
    let password = document.getElementById("password").value;
    let stayIn = document.getElementById("stayIn");
    const message = document.getElementById("message");

    const correctEmail = "admin@gmail.com";
    const correctPassword = "12345678";

    if (email === correctEmail && password === correctPassword) {
        console.log("Login successful!");
        message.textContent = " ";
        if (stayIn.checked) {
            console.log("Stay signed in");
        } else {
            console.log("Don't stay signed in");
        }
    } else {
        message.textContent = "Incorrect Username or Password";
        message.style.color = "#cc2525";
    }
}
