import React from "react";
import "./App.css";

const movies = [
  {
    title: "Бэтмен: Начало",
    description:
      "В детстве юный наследник огромного состояния Брюс Уэйн оказался свидетелем убийства своих родителей, и тогда он решил бороться с преступностью.",
    poster:
      "https://upload.wikimedia.org/wikipedia/ru/thumb/d/d2/Batman_Begins_%28poster%29.jpg/245px-Batman_Begins_%28poster%29.jpg",
    showtimes: ["10:00 AM", "1:00 PM", "3:00 PM"],
  },
  {
    title: "Хардкор",
    description:
      "Гротескная и кровавая российско-голливудская экшен-комедия с невменяемым сюжетом, снятая полностью от первого лица на GoPro 3, закрепленную на голове актера.!",
    poster:
      "https://upload.wikimedia.org/wikipedia/ru/0/0d/Hardcore_movie_poster.jpg",
    showtimes: ["11:00 AM", "2:00 PM", "4:00 PM"],
  },
];

const Movie = ({ title, description, poster, showtimes }) => (
  <div className="movie">
    <h2>{title}</h2>
    <img src={poster} alt={`${title} poster`} />
    <p>{description}</p>
    <ul>
      {showtimes.map((time, index) => (
        <li key={index}>{time}</li>
      ))}
    </ul>
  </div>
);

function App() {
  return (
    <div className="App">
      <h1>Cinema "У Бахи"</h1>
      {movies.map((movie, index) => (
        <Movie key={index} {...movie} />
      ))}
    </div>
  );
}

export default App;
