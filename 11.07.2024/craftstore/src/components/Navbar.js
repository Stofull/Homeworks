import { Link } from 'react-router-dom';

function Navbar() {
  return (
    <nav className="bg-white text-black p-4">
      <div className="container mx-auto flex justify-between items-center">
        <Link to="/" className="text-2xl font-bold">Crafts Store</Link>
        <ul className="flex space-x-4">
          <li><Link to="/" className="hover:underline">Home</Link></li>
          <li><Link to="/products" className="hover:underline">Products</Link></li>
          <li><Link to="/news" className="hover:underline">News</Link></li>
        </ul>
      </div>
    </nav>
  );
}

export default Navbar;
