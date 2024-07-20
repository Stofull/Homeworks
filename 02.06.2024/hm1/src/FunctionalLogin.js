import React from "react";

export default function FunctionalLogin() {
  return (
    <body class="antialiased">
      <div class="container px-6 mx-auto">
        <div class="flex flex-col text-center md:text-left md:flex-row h-screen justify-evenly md:items-center">
          <div class="Border">
            <h2 class="text">Log In</h2>
            <form action="" class="Bord-El">
              <div id="input" class="flex flex-col w-full my-5">
                <input
                  type="text"
                  id="username"
                  placeholder="Username"
                  class="Use-Inf"
                />
              </div>
              <div id="input" class="flex flex-col w-full my-5">
                <input
                  type="password"
                  id="password"
                  placeholder="Password"
                  class="Use-Inf"
                />
              </div>
              <div id="button" class="Use-Marg">
                <button type="button" class="Use-Butt">
                  <div class="Use-Butt-Size">
                    <div class="mr-2"></div>
                    <div class="Use-Word">Log In</div>
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
