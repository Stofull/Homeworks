import "./App.css";
import FunctionalLogin from "./FunctionalLogin";
import FunctionalRegister from "./FunctionalRegister";
import FunctionalNavItem from "./FunctionalNavItem";

function App() {
  return (
    <div className="App">
      <header className="App-Nav">
        <FunctionalNavItem />
      </header>
      <main className="App-main">
        {/* <FunctionalLogin /> */}
        {/* <FunctionalRegister /> */}
      </main>
    </div>
  );
}

export default App;
