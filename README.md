# 🚗 Vehicle Management System (C++ Project)

Welcome to the **Vehicle Management System** — a console-based project built using **Object-Oriented Programming (OOP)** in C++. This system simulates a basic **used vehicle marketplace**, where users can **buy or sell** second-hand **cars 🚘** and **bikes 🏍️**.

---

## 🛠️ Features

✨ This project includes:

- 🧾 **Add New Vehicles**  
  Add detailed information for a car or bike you're selling.

- 🔍 **Search & View Vehicles**  
  Browse available vehicles filtered by company (e.g., Maruti Suzuki, Honda).

- 🗂️ **Categorized Menu**  
  Separate workflows for buying and selling bikes and cars.

- 💾 **Data Stored in Objects**  
  Vehicle details are stored in memory using classes and arrays.

- 🧠 **Interactive Console UI**  
  Built-in menu system that guides the user step-by-step.

---

## 💡 How It Works

Users are greeted with a menu where they can:

1. **Sell a Vehicle** — Enter vehicle details.
2. **Buy a Vehicle** — Search by company name to view vehicle listings.
3. **Exit the System**

---

## 📦 Classes & Structure

- **Class `car`**: Holds car details like company, model, number, fuel type, distance, registration state, rate, and owner.
- **Class `bike`**: Similar to `car`, but specific to bikes.
- **Static members**: Used to track total cars and bikes added.
- **Friend functions**: Access private data for displaying vehicles.

---

## 🧪 Implementation Details

| Concept Used        | Description                                           |
|---------------------|-------------------------------------------------------|
| 🎯 OOP Principles    | Encapsulation, Class/Objects, Static members         |
| 🧑‍🤝‍🧑 Friend Functions | For displaying private data outside the class        |
| 🧠 Dynamic Input      | Uses `cin` and `getline()` to gather real-time data |
| 💡 Interactive Flow  | Loops and conditional statements for menus          |

---

## ✅ Advantages

- 🔹 Simple and beginner-friendly
- 🔹 Object-Oriented Design (scalable)
- 🔹 Easily extendable (can add file storage, GUI, etc.)
- 🔹 Great project for **B.Tech 1st-year students** learning C++

---

## 📚 Future Improvements

- 💾 Add file I/O to store data permanently
- 🖥️ Create a GUI with frameworks like Qt or SFML
- ☁️ Connect to an online database for real-time listings
- 🧪 Include unit tests for better code reliability

---

## 🧠 Theory Behind the Project

This project is designed to apply **OOP principles** in solving a real-world problem:

- **Abstraction**: Users interact with simple menus without worrying about internal structure.
- **Encapsulation**: Vehicle details are safely stored in class objects.
- **Modularity**: Each vehicle type has its own class, functions, and data members.
- **Maintainability**: Adding a new vehicle type (e.g., truck) would be straightforward.

---

## 📸 Screenshots

> You can add screenshots of your console here using:
