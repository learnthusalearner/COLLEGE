const express = require("express");
const { createTodo, updateTodo } = require("./types");
const { todo } = require("./dbSchema");
const cors = require("cors");
const app = express();

app.use(express.json());
app.use(cors());
app.post("/todo", function (req, res) {//posting data in server
	const todoBody = req.body;
	const parsedBody = createTodo.safeParse(todoBody);

	if (!parsedBody.success) {
		res.status(411).json({
			message: "Wrong inputs!",
		});
		return;
	}
	todo.create({//if data entered is correct then enter the data on db
		title: todoBody.title,
		description: todoBody.description,
		completed: false,//false because the process is yet not completed in todo app
	});

	res.status(201).json({
		message: "Todo created",
	});
});

app.get("/todos", async function (req, res) {//getting all the data from the server db
	const allTodos = await todo.find({});
	res.json({
		todos: allTodos,
	});
});

app.put("/completed", async function (req, res) {
	const todoBody = req.body;
	const parsedBody = updateTodo.safeParse(todoBody);

	if (!parsedBody.success) {
		res.status(411).json({
			message: "Wrong inputs!",
		});
		return;
	}

	await todo.update(
		{
			_id: req.body.id,
		},
		{
			completed: true,
		}
	);
});

app.listen(3000, () => {
	console.log("Server running...");
});
