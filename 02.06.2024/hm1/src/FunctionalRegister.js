import React from "react";

export default function FunctionalRegister() {
  return (
    <body class="antialiased">
      <div class="container px-6 mx-auto">
        <div class="flex flex-col text-center md:text-left md:flex-row h-screen justify-evenly md:items-center">
          <div class="Border">
            <h2 class="text">Register</h2>
            <form action="" class="Bord-El">
              <div id="input" class="flex flex-col w-full my-5">
                <input
                  type="text"
                  id="username"
                  placeholder="Username"
                  class="Use-Inf"
                />
              </div>
              <input
                type="text"
                id="Email"
                placeholder="Email"
                class="Use-Inf"
              />
              <div id="input" class="flex flex-col w-full my-5">
                <input
                  type="password"
                  id="password"
                  placeholder="Password"
                  class="Use-Inf"
                />
              </div>
              <div
                id="button"
                className="App-Button w-full flex flex-col mt-4 mb-5"
              >
                <button type="button" class="Use-Butt">
                  <div class="Use-Butt-Size">
                    <div class="mr-2"></div>
                    <div class="Use-Word">Register</div>
                  </div>
                </button>
              </div>
            </form>
          </div>
        </div>
      </div>
    </body>
  );
}
