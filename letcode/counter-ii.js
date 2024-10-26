/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  let org = init
  return {
    increment: () => {
      return ++org
    },
    decrement: () => {
      return --org
    },
    reset: () => {
      org = init
      return init
    },
  }
}

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
