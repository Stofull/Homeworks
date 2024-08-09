import {Link, useParams } from 'react-router-dom';

const products = [
  { id: '1', name: 'Product 1', category: '1' },
  { id: '2', name: 'Product 2', category: '1' },
  { id: '3', name: 'Product 3', category: '2' },
  { id: '4', name: 'Product 4', category: '2' },
];

function Category() {
  const { id } = useParams();
  const categoryProducts = products.filter(p => p.category === id);

  return (
    <div className="container mx-auto p-4">
      <h1 className="text-3xl font-bold mb-6">Products in Category {id}</h1>
      <div className="grid grid-cols-2 sm:grid-cols-4 gap-4">
        {categoryProducts.map(product => (
          <Link key={product.id} to={`/products/${product.id}`} className="bg-white border rounded-lg shadow-md p-4 text-center">
            <h3 className="text-lg font-semibold">{product.name}</h3>
          </Link>
        ))}
      </div>
    </div>
  );
}

export default Category;
