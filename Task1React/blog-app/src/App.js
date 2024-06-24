import React from "react";
import "./App.css";

const posts = [
  {
    title: "Первая задача",
    content: "Задача на день написать проект на реакте",
    date: "2024-06-24",
    tags: ["React", "JavaScript"],
  },
  {
    title: "Вторая задача",
    content: "Сдать свои просрочки до конца",
    date: "2024-06-24",
    tags: ["CSS", "HTML"],
  },
];

const BlogPost = ({ title, content, date, tags }) => (
  <div className="blog-post">
    <h2>{title}</h2>
    <p>
      <strong>Date:</strong> {date}
    </p>
    <p>{content}</p>
    <div>
      <strong>Tags:</strong> {tags.join(", ")}
    </div>
  </div>
);

function App() {
  return (
    <div className="App">
      <h1>Blog</h1>
      {posts.map((post, index) => (
        <BlogPost key={index} {...post} />
      ))}
    </div>
  );
}

export default App;
