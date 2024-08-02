import React from 'react';
import { Link } from 'react-router-dom';

function Navbar() {
  return (
    <nav className="bg-blue-600 p-4">
      <div className="container mx-auto flex justify-between">
        <Link to="/" className="text-white font-bold">Home</Link>
        <div>
          <Link to="/login" className="text-white mr-4">Login</Link>
          <Link to="/register" className="text-white">Register</Link>
          <Link to="/catalog" className="text-white ml-4">Catalog</Link>
        </div>
      </div>
    </nav>
  );
}

export default Navbar;
