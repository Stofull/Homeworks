import React from "react";

export default function FunctionalNavItem() {
  return (
    <div>
      <header>
        <navbar>
          <div className="Use-Nav flex justify-between px-6 items-center py-4 bg-[#c8fbdf]">
            <ul class="flex space-x-6">
              <li className="Use-text text-black text-3xl font-normal tracking-normal cursor-pointer">
                Log In
              </li>
              <li className="Use-text text-black text-3xl font-normal tracking-normal cursor-pointer">
                Register
              </li>
            </ul>
          </div>
        </navbar>
      </header>

      <body class="antialiased">
        <div class="container px-6 mx-auto">
          <div class="flex flex-col md:flex-row h-screen justify-center md:justify-between items-center gap-4">
            <div className="Bord h-[65%] w-full md:w-[45%] flex flex-col rounded-[60px] p-2 pt-0 bg-[#c8fbdf] gap-2">
              <h2 className="Txt h-full flex text-black text-[50px] leading-normal font-normal text-center flex-col-reverse items-center justify-center">
                тут форма для добавления
              </h2>
            </div>

            <div className="Bord h-[65%] w-full md:w-[45%] flex flex-col rounded-[60px] p-2 pt-0 bg-[#c8fbdf] gap-2">
              <h2 className="Txt h-full flex text-black text-[50px] leading-normal font-normal text-center flex-col-reverse items-center justify-center">
                тут список задач
              </h2>
            </div>
          </div>
        </div>
      </body>
    </div>
  );
}
